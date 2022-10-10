
# Conexio Stratus Device Tree for NCS v1.7.0

Before you can compile and flash the application firmware to the Stratus device, 
you need to gather a few files for this board. First, we need to install the board definition 
files or the board’s devicetree in the ZephyrRTOS inside nRF Connect SDK. Zephyr utilizes devicetree to describe the 
hardware available on its supported Boards, as well as that hardware’s initial configuration. 

# Fetching Conexio Stratus Board Definition Files

Since the Conexio Stratus board definition files are not yet included in the Zephyr mainstream, developers are asked to directly download the 
board files in zip format, extract/unzip, and copy the conexio_stratus folder and place it in the NCS directory:
```
ncs/v1.7.0/zephyr/boards/arm
```

You should now see a folder named conexio_stratus among other supported board files. Using the board 
target as `conexio_stratus_ns` you can build Zephyr applications for the Stratus board in non-secure mode.

```
└── ncs/
    └── v1.7.0/
        ├── zephyr/
        │   └── boards/
        │       └── arm/
        │           ├── ...
        │           ├── ...
        │           ├── conexio_stratus
        │           └── ...
        ├── bootloader
        ├── modules
        ├── nrf
        ├── tools
        ├── toolchain
        └── ...
```
