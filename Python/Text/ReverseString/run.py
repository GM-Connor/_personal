from reverse_string.reverse_string import reverse_string


def run_example(string):
    output = reverse_string(string)
    print(f"Input: \"{string}\"")
    print(f"Output: {output}\n")


# Run some examples
run_example("Bible")
run_example("Preacher")
run_example("The Word")
