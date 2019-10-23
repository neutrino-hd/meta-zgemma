FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append += "file://0001-add-zgemma-h7-stb-models.patch"

EXTRA_OECONF_append += " \
        --with-boxtype=armbox \
        --with-boxmodel=h7 \
"

