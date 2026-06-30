---

# Pico-SDK RP2350 Project starter point

---

## Building and Flashing

```bash
#choose preset
cmake --preset {debug|release}

#build
cmake --build build/{debug|release} 

#build and flash
cmake --build build/{debug|release} --target flash
```


## To-Do

* [x] **Language Server:** Setup a proper `.clangd` file for setup embedded system development
* [x] **Build Automation:** Separate the structure into proper `debug` and `release` directories.
