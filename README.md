ExampleLibrary
==============

## Description

An Example Wiring Library

## Documentation

There is a [documentation wiki](https://github.com/WiringProject/ExampleLibrary/wiki) that accompanies this repository. It is recommended that you include it as well.

## Example

```cpp
ExampleLibrary widget = ExampleLibrary(FORWARD);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  widget.doThatThing();

  delay(500);
}
```

## Other Details

Simply Fork/Clone this library and rename it.

Then rename the `ExampleLibrary.h` and `ExampleLibrary.cpp` to follow your new library name.

Do the same for the `examples/ExampleLibraryExample` folder and sketch.

This ExampleLibrary will be maintained as a "Template" library for Wiring libraries.  From time to time, we may add key features to the `ExampleLibrary.h`, `ExampleLibrary.cpp`, or `keywords.txt` files.

If you want to pull any changes that come from this repository, you can add this repository as a remote:

```sh
git remote add wiring-examplelibrary https://github.com/WiringProject/ExampleLibrary.git
```

Then, if you would like to merge the changes automatically without overwriting your `keywords.txt`, `LICENSE`, or `README.md` file, add the following to your `.git/config` file:

```
[merge "ours"]
    name = "Keep ours at merge time"
    driver = true
```

(This is a "driver" for the `.gitattributes` merge strategy - all changes for the files in `.gitattributes` will essentially be ignored.)

Finally, you can pull in the changes using this:

```sh
git pull wiring-examplelibrary
```

(Or you can use your own fetch/merge strategy.)

