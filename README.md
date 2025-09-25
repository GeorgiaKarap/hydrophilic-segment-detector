# Hydrophilic Segment Detector

This C program takes an amino acid sequence as input and converts it into a simple visual representation using symbols. 
It groups amino acids based on chemical or structural properties and assigns a unique symbol to each group.

---

## Features

- Reads an amino acid sequence from the user.
- Maps each amino acid to a symbol according to its group:

"."  Glycine (G), Threonine (T), Serine (S)<br>
"(space)"  Aspartic acid (D), Glutamic acid (E), Histidine (H), Lysine (K), Glutamine (Q), Arginine (R), Asparagine (N)<br>
":"  Alanine (A), Cysteine (C), Methionine (M), Proline (P)<br>
"*"  Phenylalanine (F), Isoleucine (I), Leucine (L), Valine (V), Tryptophan (W), Tyrosine (Y)<br>

- Provides a compact symbolic visualization of the sequence for quick analysis.

---

## Project Structure

- .gitignore
- Bacteriorhodopsin.seq
- LICENSE
- README.md
- conversions
  - aligned
  - modified.seq
  - results
- sequence conversion.c

---

## How It Works

The program reads a single amino acid sequence from standard input.<br>
It iterates through each character in the sequence.<br>
Based on the amino acid type, it prints the corresponding symbol:

- Small, polar, or flexible amino acids become  .
- Charged or polar amino acids become <space>
- Small hydrophobic amino acids become :
- Large hydrophobic/aromatic amino acids become *

The output is a single line of symbols representing the sequence.

Example Usage<br>
Input:  GTSDENHKQRCAMPFILVWY<br>
Output: ...       :*...

---

## Example Usage

Run the program and enter a sequence manually:<br>
./sequence_conversion</p>

Input:<br>
MLELLPTAVEGVSQAQITGRPEW</p>

Output:<br>
:* **:.:* .*. :</p>

File Input/Output<br>

Convert a sequence file to symbolic representation:<br>
./sequence_conversion < Bacteriorhodopsin.seq > results.seq<br>

Bacteriorhodopsin.seq contains the input amino acid sequence.<br>

results.seq will contain the mapped symbolic sequence.<br>

Example content of results.seq:<br>
:* **:.:* .*. : *.. : ****:*..:*:.*..***** .:.*. : :  **:*..**::*:*.:**.:**.*.*.:*:*.. <br>

This allows batch processing of sequences without manual input.

---

## Input Files

The program expects amino acid sequences in plain text format.<br>
Examples:<br>
Bacteriorhodopsin.seq (it needs to be aligned)<br>
aligned.seq (aligned amino acid sequence without spaces)

---

## Installation

Download the zip file and unzip it. <br>
Then open the terminal and go to the "hydrophilic-segment-detector-main" file.</p>

To convert the sequence of Bacteriorhodopsin.seq to linear type the following<br>
awk '{gsub(/ /, ""); printf "%s", $0} END {print ""}' Bacteriorhodopsin.seq > modified</p>

now the file modified contains the sequence that the program can process

---

## Compilation

To compile the program:<br>
gcc -o sequence_conversion "sequence conversion.c" </p>

---

## Execution

- Run the compiled program:<br>
./sequence_conversion</p>

- To run the program with the modified sequence:<br>
./sequence_conversion < modified > results</p>
Now the converted sequence is stored in file "results".</p>

- To match the two sequences (modified - results) type:<br>
paste -d '\n' modified results > aligned</p>

- You can view the file aligned in vim by typing<br>
vim aligned<br>
:set ruler</p>
the cursor position is displayed at the edge of the screen and corresponds to the position of each amino acid

---

## Notes

- Maximum input length is 5000 amino acids.
- Only uppercase single-letter amino acid codes are supported.
- Invalid characters will be ignored in the current implementation.

---

## License

This project is licensed under the ΜΙΤ License
