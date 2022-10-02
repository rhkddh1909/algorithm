package util;

public class Pair<T> {
	private T x;
	private T y;
	
	public Pair(T x, T y) {
		this.x = x;
		this.y = y;
	}
	
	public T getX() {
		return this.x;
	}
	
	public T getY() {
		return this.y;
	}
	
	public void setX(T x) {
		this.x = x;
	}

	public void setY(T y) {
		this.y = y;
	}
}
