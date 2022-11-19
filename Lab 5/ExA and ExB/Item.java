/* ENSF 480 - Lab 5 Exercise A and B
 * M. Moussavi, October 2022
 * 
 */

class Item <E extends Number & Comparable<E> >{
	private E item;
	public Item(E value) {
		item = value;
	}
	
	public void setItem(E value){
		item = value;
	}
	
	public E getItem(){
		return item;
	}
}
