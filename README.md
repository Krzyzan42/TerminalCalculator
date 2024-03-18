# Terminal Calculator

This is a simple calculator written in c++. It requires equation to be in reverse polish notation, so instead of `3 * 4 + 5 / 6` it is `+ * 3 4 / 5 6`. The calculator supports variables, you can first enter an equation like `* 5 x`, then compute it with any `x` value. Equations are stored in a tree format, with numbers and variables as its end nodes.

## Usage
There are five commands possible
- enter `formula`: Parses and stores formula. If there are any syntax errors, it'll correct them.
- print: Prints currently stored formula to console.
- vars: Prints out all the variables in the equation
- comp `var1` `var2` ... `varN`: Calculates equation with given variables. Variables need to be entered in the same order, they were printed out by `vars`
- join `formula`: Replaces last number in the current formula with the formula entered

## Example
![image](https://github.com/Krzyzan42/TerminalCalculator/assets/100627976/095c33a2-d63b-424d-a2b3-a84696874bcb)

## Error correction
Formula will be always, really ALWAYS fixed. It was a project requirement, not up to me. For example:
![image](https://github.com/Krzyzan42/TerminalCalculator/assets/100627976/eb864db4-6cb8-4485-82bd-490d3b0765d5)

Of course every prompt is parsed and checked, so if you enter something incorrectly, you'll get an error:
![image](https://github.com/Krzyzan42/TerminalCalculator/assets/100627976/5bf1f92e-5011-4655-931e-ff80fe9c346a)
