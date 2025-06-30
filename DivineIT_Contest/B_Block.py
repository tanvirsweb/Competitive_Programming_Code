def find_block(blocks, block):
    """Find the position and index of a block in the blocks list."""
    for stack_idx, stack in enumerate(blocks):
        if block in stack:
            return stack_idx, stack.index(block)
    return -1, -1

def return_blocks_above(blocks, stack_idx, block_idx):
    """Return blocks above the given index to their original positions."""
    stack = blocks[stack_idx]
    while len(stack) > block_idx + 1:
        top_block = stack.pop()
        blocks[top_block].append(top_block)

def pile_blocks(blocks, from_stack_idx, from_idx, to_stack_idx):
    """Move a pile of blocks from one stack to another."""
    from_stack = blocks[from_stack_idx]
    pile = from_stack[from_idx:]
    blocks[from_stack_idx] = from_stack[:from_idx]
    blocks[to_stack_idx].extend(pile)

def process_commands(n, commands):
    """Process all commands and return the final block configuration."""
    blocks = [[i] for i in range(n)]  # Each block starts in its own stack

    for command in commands:
        if command == 'quit':
            break

        parts = command.split()
        cmd, a, prep, b = parts[0], int(parts[1]), parts[2], int(parts[3])
        
        if a == b:
            continue  # Illegal command: a and b are the same

        a_stack, a_idx = find_block(blocks, a)
        b_stack, _ = find_block(blocks, b)
        
        if a_stack == b_stack:
            continue  # Illegal command: a and b are in the same stack

        if cmd == 'move':
            return_blocks_above(blocks, a_stack, a_idx)
            if prep == 'onto':
                return_blocks_above(blocks, b_stack, find_block(blocks, b)[1])
            blocks[a_stack].remove(a)
            blocks[b_stack].append(a)
        elif cmd == 'pile':
            if prep == 'onto':
                return_blocks_above(blocks, b_stack, find_block(blocks, b)[1])
            pile_blocks(blocks, a_stack, a_idx, b_stack)

    return blocks

def print_blocks(blocks):
    """Print the final block configuration."""
    for i in range(len(blocks)):
        print(f"{i}:", end="")
        if blocks[i]:
            print(" " + " ".join(map(str, blocks[i])))
        else:
            print()

def main():
    """Read input, process commands, and print the result."""
    n = int(input())
    commands = []
    while True:
        cmd = input().strip()
        commands.append(cmd)
        if cmd == 'quit':
            break

    blocks = process_commands(n, commands)
    print_blocks(blocks)



if __name__ == "__main__":
    main()