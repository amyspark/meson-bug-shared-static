project('temp1', 'c')

a_lib = library('a', 'a.c', vs_module_defs: 'a.def', install: true)

b_lib = library('b', 'b.c', link_with: a_lib, vs_module_defs: 'b.def', install: true)

pkg = import('pkgconfig')

pkg.generate(b_lib)
