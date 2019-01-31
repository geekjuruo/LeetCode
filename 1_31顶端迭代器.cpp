// Java Iterator interface reference:
// https://docs.oracle.com/javase/8/docs/api/java/util/Iterator.html
class PeekingIterator implements Iterator<Integer> {
    
    private Iterator<Integer> mIterator;
    private Integer next;

    public PeekingIterator(Iterator<Integer> iterator) {
        // initialize any member here.
        this.mIterator = iterator;
    }

    // Returns the next element in the iteration without advancing the iterator.
    public Integer peek() {
        if (next == null && mIterator.hasNext()) {
            next = mIterator.next();
        }
        return next;
    }

    // hasNext() and next() should behave the same as in the Iterator interface.
    // Override them if needed.
    @Override
    public Integer next() {
        if (next == null) {
            return mIterator.next();
        } else {
            Integer temp = next;
            next = null;
            return temp;
        }
    }

    @Override
    public boolean hasNext() {
        return next != null || mIterator.hasNext();
    }
}