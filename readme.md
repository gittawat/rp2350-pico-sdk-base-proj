pico-sdk rp2350 template project

building:
- cd build
- cmake -DCMAKE_BUILD_TYPE=Debug ..
- cmake --build .

flashing:
- probe-rs run --chip RP235x --protocol swd {.elf}

todo:
- setup proper .clangd
- setup proper debug and release directory 
