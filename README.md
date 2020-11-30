# FileSorter

Improved version of cd Linux command with built-in ls and multithreading

**WORK IN PROGRESS**

## How To Use

1. Add alias
2. Use next options:
    * -p [path...] (necessarily) - path to directory you need to get
    * -n [path...] (optional)(can be added multiple times) - path to another directory you need to add to main
    
**Example:**
```
cdd -p /home/user -n /home/user/new_directory -n /home -n /home/user/another_directory
```

### How to add alias
1. Edit <pre>~/.bashrc (~/.zshrc)</pre> file using text redactor: ```nvim ~/.bashrc``` or ```source ~/.zshrc```
2. Append your shell alias
3. For example append: ```alias lsa='ls -a'```
4. Save and close the file.
5. Activate alias by typing: ```source ~/.bashrc``` or ```source ~/.zshrc```

## Built With

* [CMake](https://cmake.org/) - served to build the project

## Contributing

If you have suggestions, write: 
* GMail: **vladislav.kolyadenko@gmail.com**
* Telegram: **@vlad_is_real** 
* Instagram: **@ncks_gwc**

## Versioning

For the versions available, see the [cdd](https://github.com/VladKk/cdd). 

## Authors

* **Vladislav Kolyadenko** - *Main developer* - [VladKk](https://github.com/VladKk)

## Acknowledgments

* I only learn programming and the project may have a lot of bugs and mistakes, so don't judge strictly:)
* The program was developed and tested on Ubuntu and I don't know how it works on other systems
