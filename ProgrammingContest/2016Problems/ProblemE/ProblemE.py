# Problem E: Protein Similarity (2016)
# Takes two protein sequences and outputs the amino acids that are at the same letter and position

seq1 = input().upper()
seq2 = input().upper()

# length of sequence
# gets the sequence with the lowest length
n = min(len(seq1), len(seq2))

# counts matching amino acids
# List comprehensions * Understand how it works
matches = sum(1 for i in range(n) if seq1[i] == seq2[i])

# format output fraction
# divides the number by the shorter protein
similarity = f"{matches}/{n}"
print(similarity)
