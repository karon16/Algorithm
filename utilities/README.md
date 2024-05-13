# 1. Makefile Template explanations

1. **Variables**:
    - `CC`: Specifies the C++ compiler to use (in this case, `g++`).
    - `CFLAGS`: Specifies the compiler flags to use. `-c` flag tells the compiler to generate object files without linking. `-Wall` enables most compiler warnings.
    - `LDFLAGS`: Specifies the flags to pass to the linker.
    - `SOURCES`: Lists all the source files (`main.cpp`, `ds021.cpp`).
    - `OBJECTS`: Lists all the object files to be generated from the source files.
    - `EXECUTABLE`: Specifies the name of the final executable file.

2. **Targets**:
    - `all`: The default target. It depends on `$(SOURCES)` and `$(EXECUTABLE)`, meaning it will build the sources and the executable.
    - `$(EXECUTABLE)`: This target depends on `$(OBJECTS)`. It specifies how to link the object files together into an executable.
    - `.cpp.o`: This is a pattern rule that tells make how to generate object files from source files. For example, `main.cpp` will generate `main.o`.

3. **Commands**:
    - `$(EXECUTABLE): $(OBJECTS)`:
        - This line specifies the recipe to build the executable. It uses the predefined variables `$(LDFLAGS)` and `$(OBJECTS)` to specify the linker flags and object files.
    - `$(CC) $(LDFLAGS) $(OBJECTS) -o $@`:
        - This line is the actual command to link the object files into the executable. `$@` is a special variable that represents the target of the rule (in this case, the executable).
    - `$(CC) $(CFLAGS) $< -o $@`:
        - This line is the command to compile a source file (`$<`) into an object file (`$@`). `$<` is a special variable that represents the first prerequisite of the rule (in this case, the source file).

4. **Phony Targets**:
    - `clean`: This target is used to clean up generated files. It removes all object files (`*.o`) and the executable file. It's marked as `.PHONY` to ensure it always gets executed, regardless of whether a file named `clean` exists. remove generated files for easy cleanup.