


def main():
    """Main Function designed to just test"""
    # our list
    List = [*range(1,101,1)]

    # Our number to find
    Find  = int(input("Enter number between 1 and 100:"))
    print("Item Found at index: " + str( bin_search( List, 0, len(List) , Find ) ))

def bin_search( List, low, high, Find ):
    """This is a recursive binary Search Function
    Parameters
    ----------
    List: list
         List of the items to search in, MUST be sorted
    low: int
         index of the lowest number, starts with 0 and changes depending on mid
    high: int
         index of the highest number, starts with len(List) and changes depending on mid.
    Find: int
         The number we are looking for.

    Returns
    -------
    if found the number return its index, else return -1.
    """
    mid  = (low + high) // 2

    if __debug__ :
        print("mid: " + str(mid) + " Find:" + str(Find))

    # Exit if not found and we searched the entire list.
    if low >= high:
        return -1
    # if found return the index
    if Find == List[mid] :
        return mid
    if List[mid] > Find :
        return bin_search( List, low, mid, Find )
    if List[mid] < Find :
        return bin_search( List, mid+1, high, Find )
    else :
        return -1

if __name__ == "__main__":
    main()
