# Problem E: Protein Similarity (2016)
# Takes two protein sequences and outputs the amino acids that are at the same letter and position

seq1 = input()
seq2 = input()

# checks if the sequence is under 500
if len(seq1) > 500 or len(seq2) > 500:
    print("Error: protein sequences are more than 500 amino acids")
    exit()

# checks if the sequences are capitalize letters
elif not seq1.isupper() or not seq2.isupper():
    print("Error: protein sequences contain lowercase letters")
    exit()

# checks if the sequences have non-characters
elif not seq1.isalpha() or not seq2.isalpha():
    print("Error: protein sequences contain non-characters")
    exit()

else: 
    # length of sequence
    n = min(len(seq1), len(seq2))

    # counts matching amino acids
    matches = sum(1 for i in range(n) if seq1[i] == seq2[i])

    # format output fraction
    # divides the number by the shorter protein
    similarity = "{}/{}".format(matches, n)
    print(similarity)
