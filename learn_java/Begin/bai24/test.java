public class test<T> {
	private T value;

	public test(T value)
	{
		this.value = value;
	}
	
	public void setValue (T value)
	{
		this.value = value;
	}
	
	public T getValue()
	{
		return value;
	}	
}
