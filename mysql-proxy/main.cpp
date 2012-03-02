/*
 * main.cpp
 *
 *  Created on: 2012-3-1
 *      Author: jianghao
 */
#include <>

void start_slave_io() {
	init_slave_thread();
	connect_to_master();
	register_slave_on_master();
	read_event();
	dump_to_file();
}

void start_slave_sql() {

}

int main(int argc, char* argv) {

}
