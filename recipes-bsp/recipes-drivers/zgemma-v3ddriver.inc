DESCRIPTION = "V3DDRIVER for ${MACHINE}"
SECTION = "base"
PRIORITY = "required"
LICENSE = "CLOSED"
PACKAGE_ARCH = "${MACHINE_ARCH}"

PROVIDES = "virtual/libgles2 virtual/egl"
DEPENDS = "zgemma-v3ddriver-headers"

PV = "${SRCDATE}"

SRC_URI = "http://source.mynonpublic.com/zgemma/${MACHINE}-v3ddriver-${SRCDATE}.zip"

S = "${WORKDIR}"


do_configure() {
}

do_compile() {
}

do_install_append() {
    install -d ${D}${libdir}
    install -m 0755 ${S}/libnxpl.so ${D}${libdir}/
    install -m 0755 ${S}/libnexus.so ${D}${libdir}/
    install -m 0755 ${S}/libv3ddriver.so ${D}${libdir}/
    ln -s libv3ddriver.so ${D}${libdir}/libEGL.so
    ln -s libv3ddriver.so ${D}${libdir}/libGLESv2.so
}

FILES_${PN} = "/usr/lib/*"
FILES_${PN}-dev = "/usr/include/*"

PROVIDES = "virtual/libgles2 virtual/libgles1 virtual/egl"
RPROVIDES_${PN} = "libnxpl.so libnexus.so libv3ddriver.so libEGL.so.1.4 libEGL.so.1 libEGL.so libGLESv1_CM.so.1.1 libGLESv1_CM.so.1 libGLESv1_CM.so libGLESv2.so.2.0 libGLESv2.so.2 libGLESv2.so"

INSANE_SKIP_${PN} += "already-stripped dev-so"

