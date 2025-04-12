;; -*- lexical-binding: t; -*-

(TeX-add-style-hook
 "Exercises"
 (lambda ()
   (TeX-add-to-alist 'LaTeX-provided-class-options
                     '(("article" "")))
   (TeX-add-to-alist 'LaTeX-provided-package-options
                     '(("amsmath" "") ("amsthm" "") ("amssymb" "") ("amsfonts" "") ("thmtools" "") ("graphicx" "") ("setspace" "") ("geometry" "") ("float" "") ("hyperref" "hidelinks") ("inputenc" "utf8") ("babel" "spanish") ("framed" "") ("xcolor" "dvipsnames") ("tcolorbox" "") ("tikz" "") ("caption" "") ("longtable" "") ("pdflscape" "") ("svg" "") ("subcaption" "") ("multirow" "") ("array" "") ("listings" "") ("cancel" "")))
   (TeX-run-style-hooks
    "latex2e"
    "article"
    "art10"
    "amsmath"
    "amsthm"
    "amssymb"
    "amsfonts"
    "thmtools"
    "graphicx"
    "setspace"
    "geometry"
    "float"
    "hyperref"
    "inputenc"
    "babel"
    "framed"
    "xcolor"
    "tcolorbox"
    "tikz"
    "caption"
    "longtable"
    "pdflscape"
    "svg"
    "subcaption"
    "multirow"
    "array"
    "listings"
    "cancel"))
 :latex)

