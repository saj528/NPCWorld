public class JavaToC {

    public native void helloC();

    static {
        System.loadLibrary("HelloWorld");
    }
}
