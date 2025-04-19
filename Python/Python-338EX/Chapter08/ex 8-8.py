# ex 8-8.py

def reverse_sentence(s):
    words = s.split(" ")
    result = ""
    for word in words:
        result = word + " " + result

    return result


sentence = "Nice to meet you."
print(reverse_sentence(sentence))
