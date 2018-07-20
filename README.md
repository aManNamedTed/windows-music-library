# windows-music-library

Range of pre-calculated notes using the windows.h file function [Beep()](https://msdn.microsoft.com/en-us/library/windows/desktop/ms679277(v=vs.85).aspx). This was created due to an earlier project of mine, [16th & Oak](https://github.com/aManNamedTed/16th-Oak), where I made a small melody in the opening scene of the game while referencing [this resource](https://pages.mtu.edu/~suits/notefreqs.html). I also screenshotted the reference and stored it in the [img](img) directory in case the reference is renamed or deleted. 

The hope is to open-source this library to others to play around with and make their own music. Happy composing!

## Compatibility

<p float="left" text-align="center">
  <img class="compat_img" width="128" height="128" src="img/win_10_compat_icon.png"/>
  <img class="compat_img" width="128" height="128" src="img/win_8_compat_icon.png"/>
  <img class="compat_img" width="128" height="128" src="img/win_7_compat_icon.png"/>
</p>

## Getting Started

0. Use a Windows PC or virtual machine with Windows 7, Windows 8, or Windows 10 installed.
1. Clone the repository onto said Windows PC or virtual machine.
2. Make sure you have a C++ compiler installed on your Windows PC or virtual machine.
3. Navigate to the "yourMusic" directory.
4. Open "yourFirstSong.cpp" in your favorite text editor or integrated development environment.
5. Make music! Good luck!

## Usage

Check out the sample music in the "sampleMusic" directory for how to format your files.
Don't forget to compile and run on a machine using Windows 10, Windows 8, or Windows 7.

> <b>Note:</b> 
> <i>
>   Remember that the [88-key range of a piano](img/piano_organ_range.jpg) is A0 to C8 (inclusive). So if your computer is 
>   able to compile and run the library as-is with no audible output, try a different note in the middle of the range or 
>   increase the length of the tone.
> </i> 

### Method 1: Using [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/) (IDE)

0. Complete the [Getting Started](#getting-started) section above.
1. Click this link https://sourceforge.net/projects/orwelldevcpp/ to go to the Dev-C++ download page.
2. Download Dev-C++.
3. Open Dev-C++.
4. Navigate to File > New > Project...
5. Click the Basic tab.
6. Click Console Application.
7. Select C++ Project.
8. Name your project something fun, then click OK.
9. Navigate to the directory you want to save your project in and click Save.
10. In the view on the left, click the Project tab
11. Right click your project.
12. Select Add To Project...
13. Navigate to the src directory within the library.
14. Add both WinMusLib files--they serve different purposes, I promise-- and click Open.
15. Do steps 12-14, but instead add the file from yourMusic/yourFirstSong.cpp.
16. Insert a few of your favorite notes.
17. Click Execute > Compile & Run or press F11.
18. Repeat steps 16-17 until satisfied. (Good luck!)

//to add 2 ide config
### Method 2: Using [Visual C++](https://www.microsoft.com/en-us/download/details.aspx?id=48145)

//to add 1 cli config
### Method 3: Using cli conifg

//to add 2 cli config
### Method 4: Using CLI config

## Contributing

If you're set on contributing, feel free to say hi@davidamante.com

## Versioning

I use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/aManNamedTed/windows-music-library/tags). 

## Authors

* **David Amante** - *Initial work* - [aManNamedTed](https://github.com/aManNamedTed)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Thanks for still using hardware beeps, [Microsoft](https://github.com/Microsoft).
