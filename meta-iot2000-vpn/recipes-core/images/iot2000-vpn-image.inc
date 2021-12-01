WKS_FILE = "vpn-image.${MACHINE}.wks"

IMAGE_FSTYPES_append = " wic.bmap"

DESCRIPTION = "Wireguard VPN image for the IOT2000 platform"

#example features
IMAGE_FEATURES += "package-management"

IMAGE_INSTALL += "opkg"
IMAGE_INSTALL += "os-release"
IMAGE_INSTALL += "dmidecode"
IMAGE_INSTALL += "openssh"
IMAGE_INSTALL += "screen minicom"
IMAGE_INSTALL += "curl"
IMAGE_INSTALL += "pciutils"
IMAGE_INSTALL += "iptables"
IMAGE_INSTALL += "nano tree"
IMAGE_INSTALL += "linux-firmware"
IMAGE_INSTALL += "setledcolor"
IMAGE_INSTALL += "cronie"
IMAGE_INSTALL += "bc wireguard-module wireguard-tools"

# causing excessive boot delays with Yocto 3.0
PACKAGE_EXCLUDE += "rng-tools"
