# Learning Vulkan
learning Vulkan from [this tutorial](https://vulkan-tutorial.com/).
Modify XCode building step to CMake tool.

## Notice
need export environment `VK_LAYER_PATH` and `VK_ICD_FILENAMES`, such as:
```
export VK_LAYER_PATH=/Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/etc/vulkan/explicit_layer.d
export VK_ICD_FILENAMES=/Users/lorancechen/soft/vulkan/vulkansdk-macos-1.1.82.1/macOS/etc/vulkan/icd.d/MoltenVK_icd.json
```

## Other resource
- [lunarg tutorials](https://vulkan.lunarg.com/doc/sdk/1.1.85.0/mac/tutorial/html/index.html)