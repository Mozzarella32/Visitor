# Visitor

A simple visitor until it is in the stl

## Usage

```c++
Visitor v{
	[](const int& i) {
		std:cout << "int: " << i << std::endl;
	},
	[](const std::string& s) {
		std::coun << "string: " << s << std::endl;
	}
};

std::visit(var, v);

//This also works because of template magic
Visitor v{
	[](const auto& i) {
		std::coun << decltype(i).name() << ": " << i << std::endl;
	}
}
```
