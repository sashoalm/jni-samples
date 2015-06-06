class Sample1 {
    public static native String nativeReverse(String a);
    public static void main(String[] args) {
        System.loadLibrary("Sample1");
        System.out.println("nativeReverse(\"hello\")=" + nativeReverse("hello"));
    }
}
