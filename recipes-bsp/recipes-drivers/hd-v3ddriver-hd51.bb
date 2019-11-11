SRCDATE = "20170322"

require hd-v3ddriver.inc

SRC_URI[md5sum] = "8aafd13941ebe1cc605f7f5f000ac08e"
SRC_URI[sha256sum] = "9bfbea9951a8f382eaddc366c36166d293b371153000a1f0ff5534d6e0462591"

COMPATIBLE_MACHINE = "hd51"

INSANE_SKIP_${PN} += "ldflags"

RPROVIDES_${PN} = "virtual/egl"
RPROVIDES_${PN} = "virtual/libgles2"