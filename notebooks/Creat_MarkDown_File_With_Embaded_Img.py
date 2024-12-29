import re
import base64
import os
import glob


####### Go to notebook, file => export => markdown
####### (ensure that one MD file in the folder)
####### unzip the file + add this .py inside



# Get all .txt files in the current folder
md_files = glob.glob("./*.md")


markdown_file = md_files[0] #"MLModelToArduinoCpp.md"
print("markdown_file",markdown_file)
output_file = markdown_file.split(".")[-2:]
output_file = output_file [0] +"_Updated."+output_file [1]
print("output_file", output_file)








def convert_image_to_base64(image_path):
    """Convert an image to a base64 string."""
    with open(image_path, "rb") as image_file:
        return base64.b64encode(image_file.read()).decode("utf-8")

# Read the Markdown file
with open(markdown_file, "r") as file:
    markdown_content = file.read()

# Patterns to match
patterns = [
    r"!\[png\]\((.*?)\)",  # Match ![png](filename.png)
    r'<img src\s*=\s*"(.*?)"\s*>',  # Match <img src="filename_or_url">
]

# Process matches for each pattern
for pattern in patterns:
    matches = re.findall(pattern, markdown_content)

    for match in matches:
        if match.startswith("http"):  # Skip URLs
            print(f"Skipping URL: {match}")
            continue

        if os.path.exists(match):  # Check if file exists locally
            base64_image = convert_image_to_base64(match)

            # Create the base64 Markdown or HTML replacement
            if pattern == patterns[0]:
                # Replace for Markdown pattern
                replacement = f"![png](data:image/png;base64,{base64_image})"
                markdown_content = markdown_content.replace(f"![png]({match})", replacement)
            elif pattern == patterns[1]:
                # Replace for HTML <img> pattern
                replacement = f'<img src="data:image/png;base64,{base64_image}">'
                markdown_content = markdown_content.replace(f'<img src="{match}">', replacement)
        else:
            print(f"Warning: File not found - {match}")

# Save the updated Markdown file
print("output_file", output_file)
with open(output_file, "w") as file:
    file.write(markdown_content)

print(f"Updated Markdown file saved as {output_file}")
