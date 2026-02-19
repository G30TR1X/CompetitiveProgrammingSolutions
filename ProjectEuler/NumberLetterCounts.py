from num2words import num2words

if __name__ == '__main__':
    letter_count = 0
    for i in range(1, 1001):
        letter_words = num2words(i)
        for word in letter_words:
            if word.isalpha():
                letter_count += 1;

    print(letter_count)
