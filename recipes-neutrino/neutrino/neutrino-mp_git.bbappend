FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI_append = "file://0001-neutrino-add-zgemma-h7-stb-models.patch"

EXTRA_OECONF_append += "--with-boxtype=armbox \
                        --with-boxmodel=h7 \
                        --with-stb-hal-includes=${STAGING_INCDIR}/libstb-hal \
"
