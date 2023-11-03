// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// ==============================================================

#define AP_INT_MAX_W 32678

#include <systemc>
#include <iostream>
#include <cstdlib>
#include <cstddef>
#include <stdint.h>
#include "SysCFileHandler.h"
#include "ap_int.h"
#include "ap_fixed.h"
#include <complex>
#include <stdbool.h>
#include "autopilot_cbe.h"
#include "hls_stream.h"
#include "hls_half.h"
#include "hls_signal_handler.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;


// [dump_struct_tree [build_nameSpaceTree] dumpedStructList] ---------->


// [dump_enumeration [get_enumeration_list]] ---------->


// wrapc file define: "input_layer_V"
#define AUTOTB_TVIN_input_layer_V  "../tv/cdatafile/c.myproject.autotvin_input_layer_V.dat"
// wrapc file define: "layer18_out_0_V"
#define AUTOTB_TVOUT_layer18_out_0_V  "../tv/cdatafile/c.myproject.autotvout_layer18_out_0_V.dat"
// wrapc file define: "layer18_out_1_V"
#define AUTOTB_TVOUT_layer18_out_1_V  "../tv/cdatafile/c.myproject.autotvout_layer18_out_1_V.dat"
// wrapc file define: "layer18_out_2_V"
#define AUTOTB_TVOUT_layer18_out_2_V  "../tv/cdatafile/c.myproject.autotvout_layer18_out_2_V.dat"
// wrapc file define: "layer18_out_3_V"
#define AUTOTB_TVOUT_layer18_out_3_V  "../tv/cdatafile/c.myproject.autotvout_layer18_out_3_V.dat"
// wrapc file define: "layer18_out_4_V"
#define AUTOTB_TVOUT_layer18_out_4_V  "../tv/cdatafile/c.myproject.autotvout_layer18_out_4_V.dat"

#define INTER_TCL  "../tv/cdatafile/ref.tcl"

// tvout file define: "layer18_out_0_V"
#define AUTOTB_TVOUT_PC_layer18_out_0_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer18_out_0_V.dat"
// tvout file define: "layer18_out_1_V"
#define AUTOTB_TVOUT_PC_layer18_out_1_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer18_out_1_V.dat"
// tvout file define: "layer18_out_2_V"
#define AUTOTB_TVOUT_PC_layer18_out_2_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer18_out_2_V.dat"
// tvout file define: "layer18_out_3_V"
#define AUTOTB_TVOUT_PC_layer18_out_3_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer18_out_3_V.dat"
// tvout file define: "layer18_out_4_V"
#define AUTOTB_TVOUT_PC_layer18_out_4_V  "../tv/rtldatafile/rtl.myproject.autotvout_layer18_out_4_V.dat"

class INTER_TCL_FILE {
	public:
		INTER_TCL_FILE(const char* name) {
			mName = name;
			input_layer_V_depth = 0;
			layer18_out_0_V_depth = 0;
			layer18_out_1_V_depth = 0;
			layer18_out_2_V_depth = 0;
			layer18_out_3_V_depth = 0;
			layer18_out_4_V_depth = 0;
			trans_num =0;
		}

		~INTER_TCL_FILE() {
			mFile.open(mName);
			if (!mFile.good()) {
				cout << "Failed to open file ref.tcl" << endl;
				exit (1);
			}
			string total_list = get_depth_list();
			mFile << "set depth_list {\n";
			mFile << total_list;
			mFile << "}\n";
			mFile << "set trans_num "<<trans_num<<endl;
			mFile.close();
		}

		string get_depth_list () {
			stringstream total_list;
			total_list << "{input_layer_V " << input_layer_V_depth << "}\n";
			total_list << "{layer18_out_0_V " << layer18_out_0_V_depth << "}\n";
			total_list << "{layer18_out_1_V " << layer18_out_1_V_depth << "}\n";
			total_list << "{layer18_out_2_V " << layer18_out_2_V_depth << "}\n";
			total_list << "{layer18_out_3_V " << layer18_out_3_V_depth << "}\n";
			total_list << "{layer18_out_4_V " << layer18_out_4_V_depth << "}\n";
			return total_list.str();
		}

		void set_num (int num , int* class_num) {
			(*class_num) = (*class_num) > num ? (*class_num) : num;
		}
	public:
		int input_layer_V_depth;
		int layer18_out_0_V_depth;
		int layer18_out_1_V_depth;
		int layer18_out_2_V_depth;
		int layer18_out_3_V_depth;
		int layer18_out_4_V_depth;
		int trans_num;

	private:
		ofstream mFile;
		const char* mName;
};

extern void myproject (
ap_fixed<12, 4, (ap_q_mode) 0, (ap_o_mode)0, 0> input_layer[24],
ap_fixed<16, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> layer18_out[5]);

void AESL_WRAP_myproject (
ap_fixed<12, 4, (ap_q_mode) 0, (ap_o_mode)0, 0> input_layer[24],
ap_fixed<16, 6, (ap_q_mode) 5, (ap_o_mode)3, 0> layer18_out[5])
{
	refine_signal_handler();
	fstream wrapc_switch_file_token;
	wrapc_switch_file_token.open(".hls_cosim_wrapc_switch.log");
	int AESL_i;
	if (wrapc_switch_file_token.good())
	{
		CodeState = ENTER_WRAPC_PC;
		static unsigned AESL_transaction_pc = 0;
		string AESL_token;
		string AESL_num;
		static AESL_FILE_HANDLER aesl_fh;


		// output port post check: "layer18_out_0_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_0_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_0_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_0_V, AESL_token); // data

			sc_bv<16> *layer18_out_0_V_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_0_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer18_out_0_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_0_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer18_out_0_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer18_out_0_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer18_out.V(15, 0)
						// {
							sc_lv<16>* layer18_out_V_lv0_0_0_2 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer18_out_V_lv0_0_0_2[hls_map_index].range(15, 0) = sc_bv<16>(layer18_out_0_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (0) => (0) @ (2)
							for (int i_0 = 0; i_0 <= 0; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : layer18_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer18_out[0]
								// output_left_conversion : (layer18_out[i_0]).range()
								// output_type_conversion : (layer18_out_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer18_out[i_0]).range() = (layer18_out_V_lv0_0_0_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer18_out_0_V_pc_buffer;
		}

		// output port post check: "layer18_out_1_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_1_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_1_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_1_V, AESL_token); // data

			sc_bv<16> *layer18_out_1_V_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_1_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer18_out_1_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_1_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer18_out_1_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer18_out_1_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer18_out.V(15, 0)
						// {
							sc_lv<16>* layer18_out_V_lv0_1_1_2 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer18_out_V_lv0_1_1_2[hls_map_index].range(15, 0) = sc_bv<16>(layer18_out_1_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (1) => (1) @ (2)
							for (int i_0 = 1; i_0 <= 1; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : layer18_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer18_out[0]
								// output_left_conversion : (layer18_out[i_0]).range()
								// output_type_conversion : (layer18_out_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer18_out[i_0]).range() = (layer18_out_V_lv0_1_1_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer18_out_1_V_pc_buffer;
		}

		// output port post check: "layer18_out_2_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_2_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_2_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_2_V, AESL_token); // data

			sc_bv<16> *layer18_out_2_V_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_2_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer18_out_2_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_2_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer18_out_2_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer18_out_2_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer18_out.V(15, 0)
						// {
							sc_lv<16>* layer18_out_V_lv0_2_2_2 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer18_out_V_lv0_2_2_2[hls_map_index].range(15, 0) = sc_bv<16>(layer18_out_2_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (2) => (2) @ (2)
							for (int i_0 = 2; i_0 <= 2; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : layer18_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer18_out[0]
								// output_left_conversion : (layer18_out[i_0]).range()
								// output_type_conversion : (layer18_out_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer18_out[i_0]).range() = (layer18_out_V_lv0_2_2_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer18_out_2_V_pc_buffer;
		}

		// output port post check: "layer18_out_3_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_3_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_3_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_3_V, AESL_token); // data

			sc_bv<16> *layer18_out_3_V_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_3_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer18_out_3_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_3_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer18_out_3_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer18_out_3_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer18_out.V(15, 0)
						// {
							sc_lv<16>* layer18_out_V_lv0_3_3_2 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer18_out_V_lv0_3_3_2[hls_map_index].range(15, 0) = sc_bv<16>(layer18_out_3_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (3) => (3) @ (2)
							for (int i_0 = 3; i_0 <= 3; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : layer18_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer18_out[0]
								// output_left_conversion : (layer18_out[i_0]).range()
								// output_type_conversion : (layer18_out_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer18_out[i_0]).range() = (layer18_out_V_lv0_3_3_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer18_out_3_V_pc_buffer;
		}

		// output port post check: "layer18_out_4_V"
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_4_V, AESL_token); // [[transaction]]
		if (AESL_token != "[[transaction]]")
		{
			exit(1);
		}
		aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_4_V, AESL_num); // transaction number

		if (atoi(AESL_num.c_str()) == AESL_transaction_pc)
		{
			aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_4_V, AESL_token); // data

			sc_bv<16> *layer18_out_4_V_pc_buffer = new sc_bv<16>[1];
			int i = 0;

			while (AESL_token != "[[/transaction]]")
			{
				bool no_x = false;
				bool err = false;

				// search and replace 'X' with "0" from the 1st char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('X');
					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				no_x = false;

				// search and replace 'x' with "0" from the 3rd char of token
				while (!no_x)
				{
					size_t x_found = AESL_token.find('x', 2);

					if (x_found != string::npos)
					{
						if (!err)
						{
							cerr << "WARNING: [SIM 212-201] RTL produces unknown value 'X' on port 'layer18_out_4_V', possible cause: There are uninitialized variables in the C design." << endl;
							err = true;
						}
						AESL_token.replace(x_found, 1, "0");
					}
					else
					{
						no_x = true;
					}
				}

				// push token into output port buffer
				if (AESL_token != "")
				{
					layer18_out_4_V_pc_buffer[i] = AESL_token.c_str();
					i++;
				}

				aesl_fh.read(AUTOTB_TVOUT_PC_layer18_out_4_V, AESL_token); // data or [[/transaction]]

				if (AESL_token == "[[[/runtime]]]" || aesl_fh.eof(AUTOTB_TVOUT_PC_layer18_out_4_V))
				{
					exit(1);
				}
			}

			// ***********************************
			if (i > 0)
			{
				// RTL Name: layer18_out_4_V
				{
					// bitslice(15, 0)
					// {
						// celement: layer18_out.V(15, 0)
						// {
							sc_lv<16>* layer18_out_V_lv0_4_4_2 = new sc_lv<16>[1];
						// }
					// }

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									layer18_out_V_lv0_4_4_2[hls_map_index].range(15, 0) = sc_bv<16>(layer18_out_4_V_pc_buffer[hls_map_index].range(15, 0));
									hls_map_index++;
								}
							}
						}
					}

					// bitslice(15, 0)
					{
						int hls_map_index = 0;
						// celement: layer18_out.V(15, 0)
						{
							// carray: (4) => (4) @ (2)
							for (int i_0 = 4; i_0 <= 4; i_0 += 2)
							{
								// sub                    : i_0
								// ori_name               : layer18_out[i_0]
								// sub_1st_elem           : 0
								// ori_name_1st_elem      : layer18_out[0]
								// output_left_conversion : (layer18_out[i_0]).range()
								// output_type_conversion : (layer18_out_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str()
								if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
								{
									(layer18_out[i_0]).range() = (layer18_out_V_lv0_4_4_2[hls_map_index]).to_string(SC_BIN).c_str();
									hls_map_index++;
								}
							}
						}
					}
				}
			}

			// release memory allocation
			delete [] layer18_out_4_V_pc_buffer;
		}

		AESL_transaction_pc++;
	}
	else
	{
		CodeState = ENTER_WRAPC;
		static unsigned AESL_transaction;

		static AESL_FILE_HANDLER aesl_fh;

		// "input_layer_V"
		char* tvin_input_layer_V = new char[77];
		aesl_fh.touch(AUTOTB_TVIN_input_layer_V);

		// "layer18_out_0_V"
		char* tvout_layer18_out_0_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer18_out_0_V);

		// "layer18_out_1_V"
		char* tvout_layer18_out_1_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer18_out_1_V);

		// "layer18_out_2_V"
		char* tvout_layer18_out_2_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer18_out_2_V);

		// "layer18_out_3_V"
		char* tvout_layer18_out_3_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer18_out_3_V);

		// "layer18_out_4_V"
		char* tvout_layer18_out_4_V = new char[50];
		aesl_fh.touch(AUTOTB_TVOUT_layer18_out_4_V);

		CodeState = DUMP_INPUTS;
		static INTER_TCL_FILE tcl_file(INTER_TCL);
		int leading_zero;

		// [[transaction]]
		sprintf(tvin_input_layer_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVIN_input_layer_V, tvin_input_layer_V);

		sc_bv<288>* input_layer_V_tvin_wrapc_buffer = new sc_bv<288>[1];

		// RTL Name: input_layer_V
		{
			// bitslice(11, 0)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(11, 0) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(23, 12)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(23, 12) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(35, 24)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(35, 24) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(47, 36)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(47, 36) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(59, 48)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(59, 48) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(71, 60)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (5) => (5) @ (2)
					for (int i_0 = 5; i_0 <= 5; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(71, 60) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(83, 72)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (6) => (6) @ (2)
					for (int i_0 = 6; i_0 <= 6; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(83, 72) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(95, 84)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (7) => (7) @ (2)
					for (int i_0 = 7; i_0 <= 7; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(95, 84) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(107, 96)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (8) => (8) @ (2)
					for (int i_0 = 8; i_0 <= 8; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(107, 96) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(119, 108)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (9) => (9) @ (2)
					for (int i_0 = 9; i_0 <= 9; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(119, 108) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(131, 120)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (10) => (10) @ (2)
					for (int i_0 = 10; i_0 <= 10; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(131, 120) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(143, 132)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (11) => (11) @ (2)
					for (int i_0 = 11; i_0 <= 11; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(143, 132) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(155, 144)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (12) => (12) @ (2)
					for (int i_0 = 12; i_0 <= 12; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(155, 144) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(167, 156)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (13) => (13) @ (2)
					for (int i_0 = 13; i_0 <= 13; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(167, 156) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(179, 168)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (14) => (14) @ (2)
					for (int i_0 = 14; i_0 <= 14; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(179, 168) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(191, 180)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (15) => (15) @ (2)
					for (int i_0 = 15; i_0 <= 15; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(191, 180) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(203, 192)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (16) => (16) @ (2)
					for (int i_0 = 16; i_0 <= 16; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(203, 192) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(215, 204)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (17) => (17) @ (2)
					for (int i_0 = 17; i_0 <= 17; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(215, 204) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(227, 216)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (18) => (18) @ (2)
					for (int i_0 = 18; i_0 <= 18; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(227, 216) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(239, 228)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (19) => (19) @ (2)
					for (int i_0 = 19; i_0 <= 19; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(239, 228) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(251, 240)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (20) => (20) @ (2)
					for (int i_0 = 20; i_0 <= 20; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(251, 240) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(263, 252)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (21) => (21) @ (2)
					for (int i_0 = 21; i_0 <= 21; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(263, 252) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(275, 264)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (22) => (22) @ (2)
					for (int i_0 = 22; i_0 <= 22; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(275, 264) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
			// bitslice(287, 276)
			{
				int hls_map_index = 0;
				// celement: input_layer.V(11, 0)
				{
					// carray: (23) => (23) @ (2)
					for (int i_0 = 23; i_0 <= 23; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : input_layer[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : input_layer[0]
						// regulate_c_name       : input_layer_V
						// input_type_conversion : (input_layer[i_0]).range().to_string(SC_BIN).c_str()
						if (&(input_layer[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<12> input_layer_V_tmp_mem;
							input_layer_V_tmp_mem = (input_layer[i_0]).range().to_string(SC_BIN).c_str();
							input_layer_V_tvin_wrapc_buffer[hls_map_index].range(287, 276) = input_layer_V_tmp_mem.range(11, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvin_input_layer_V, "%s\n", (input_layer_V_tvin_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVIN_input_layer_V, tvin_input_layer_V);
		}

		tcl_file.set_num(1, &tcl_file.input_layer_V_depth);
		sprintf(tvin_input_layer_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVIN_input_layer_V, tvin_input_layer_V);

		// release memory allocation
		delete [] input_layer_V_tvin_wrapc_buffer;

// [call_c_dut] ---------->

		CodeState = CALL_C_DUT;
		myproject(input_layer, layer18_out);

		CodeState = DUMP_OUTPUTS;

		// [[transaction]]
		sprintf(tvout_layer18_out_0_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_0_V, tvout_layer18_out_0_V);

		sc_bv<16>* layer18_out_0_V_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: layer18_out_0_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer18_out.V(15, 0)
				{
					// carray: (0) => (0) @ (2)
					for (int i_0 = 0; i_0 <= 0; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : layer18_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer18_out[0]
						// regulate_c_name       : layer18_out_V
						// input_type_conversion : (layer18_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer18_out_V_tmp_mem;
							layer18_out_V_tmp_mem = (layer18_out[i_0]).range().to_string(SC_BIN).c_str();
							layer18_out_0_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer18_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_layer18_out_0_V, "%s\n", (layer18_out_0_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer18_out_0_V, tvout_layer18_out_0_V);
		}

		tcl_file.set_num(1, &tcl_file.layer18_out_0_V_depth);
		sprintf(tvout_layer18_out_0_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_0_V, tvout_layer18_out_0_V);

		// release memory allocation
		delete [] layer18_out_0_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer18_out_1_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_1_V, tvout_layer18_out_1_V);

		sc_bv<16>* layer18_out_1_V_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: layer18_out_1_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer18_out.V(15, 0)
				{
					// carray: (1) => (1) @ (2)
					for (int i_0 = 1; i_0 <= 1; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : layer18_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer18_out[0]
						// regulate_c_name       : layer18_out_V
						// input_type_conversion : (layer18_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer18_out_V_tmp_mem;
							layer18_out_V_tmp_mem = (layer18_out[i_0]).range().to_string(SC_BIN).c_str();
							layer18_out_1_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer18_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_layer18_out_1_V, "%s\n", (layer18_out_1_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer18_out_1_V, tvout_layer18_out_1_V);
		}

		tcl_file.set_num(1, &tcl_file.layer18_out_1_V_depth);
		sprintf(tvout_layer18_out_1_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_1_V, tvout_layer18_out_1_V);

		// release memory allocation
		delete [] layer18_out_1_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer18_out_2_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_2_V, tvout_layer18_out_2_V);

		sc_bv<16>* layer18_out_2_V_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: layer18_out_2_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer18_out.V(15, 0)
				{
					// carray: (2) => (2) @ (2)
					for (int i_0 = 2; i_0 <= 2; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : layer18_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer18_out[0]
						// regulate_c_name       : layer18_out_V
						// input_type_conversion : (layer18_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer18_out_V_tmp_mem;
							layer18_out_V_tmp_mem = (layer18_out[i_0]).range().to_string(SC_BIN).c_str();
							layer18_out_2_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer18_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_layer18_out_2_V, "%s\n", (layer18_out_2_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer18_out_2_V, tvout_layer18_out_2_V);
		}

		tcl_file.set_num(1, &tcl_file.layer18_out_2_V_depth);
		sprintf(tvout_layer18_out_2_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_2_V, tvout_layer18_out_2_V);

		// release memory allocation
		delete [] layer18_out_2_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer18_out_3_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_3_V, tvout_layer18_out_3_V);

		sc_bv<16>* layer18_out_3_V_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: layer18_out_3_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer18_out.V(15, 0)
				{
					// carray: (3) => (3) @ (2)
					for (int i_0 = 3; i_0 <= 3; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : layer18_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer18_out[0]
						// regulate_c_name       : layer18_out_V
						// input_type_conversion : (layer18_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer18_out_V_tmp_mem;
							layer18_out_V_tmp_mem = (layer18_out[i_0]).range().to_string(SC_BIN).c_str();
							layer18_out_3_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer18_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_layer18_out_3_V, "%s\n", (layer18_out_3_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer18_out_3_V, tvout_layer18_out_3_V);
		}

		tcl_file.set_num(1, &tcl_file.layer18_out_3_V_depth);
		sprintf(tvout_layer18_out_3_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_3_V, tvout_layer18_out_3_V);

		// release memory allocation
		delete [] layer18_out_3_V_tvout_wrapc_buffer;

		// [[transaction]]
		sprintf(tvout_layer18_out_4_V, "[[transaction]] %d\n", AESL_transaction);
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_4_V, tvout_layer18_out_4_V);

		sc_bv<16>* layer18_out_4_V_tvout_wrapc_buffer = new sc_bv<16>[1];

		// RTL Name: layer18_out_4_V
		{
			// bitslice(15, 0)
			{
				int hls_map_index = 0;
				// celement: layer18_out.V(15, 0)
				{
					// carray: (4) => (4) @ (2)
					for (int i_0 = 4; i_0 <= 4; i_0 += 2)
					{
						// sub                   : i_0
						// ori_name              : layer18_out[i_0]
						// sub_1st_elem          : 0
						// ori_name_1st_elem     : layer18_out[0]
						// regulate_c_name       : layer18_out_V
						// input_type_conversion : (layer18_out[i_0]).range().to_string(SC_BIN).c_str()
						if (&(layer18_out[0]) != NULL) // check the null address if the c port is array or others
						{
							sc_lv<16> layer18_out_V_tmp_mem;
							layer18_out_V_tmp_mem = (layer18_out[i_0]).range().to_string(SC_BIN).c_str();
							layer18_out_4_V_tvout_wrapc_buffer[hls_map_index].range(15, 0) = layer18_out_V_tmp_mem.range(15, 0);
                                 	       hls_map_index++;
						}
					}
				}
			}
		}

		// dump tv to file
		for (int i = 0; i < 1; i++)
		{
			sprintf(tvout_layer18_out_4_V, "%s\n", (layer18_out_4_V_tvout_wrapc_buffer[i]).to_string(SC_HEX).c_str());
			aesl_fh.write(AUTOTB_TVOUT_layer18_out_4_V, tvout_layer18_out_4_V);
		}

		tcl_file.set_num(1, &tcl_file.layer18_out_4_V_depth);
		sprintf(tvout_layer18_out_4_V, "[[/transaction]] \n");
		aesl_fh.write(AUTOTB_TVOUT_layer18_out_4_V, tvout_layer18_out_4_V);

		// release memory allocation
		delete [] layer18_out_4_V_tvout_wrapc_buffer;

		CodeState = DELETE_CHAR_BUFFERS;
		// release memory allocation: "input_layer_V"
		delete [] tvin_input_layer_V;
		// release memory allocation: "layer18_out_0_V"
		delete [] tvout_layer18_out_0_V;
		// release memory allocation: "layer18_out_1_V"
		delete [] tvout_layer18_out_1_V;
		// release memory allocation: "layer18_out_2_V"
		delete [] tvout_layer18_out_2_V;
		// release memory allocation: "layer18_out_3_V"
		delete [] tvout_layer18_out_3_V;
		// release memory allocation: "layer18_out_4_V"
		delete [] tvout_layer18_out_4_V;

		AESL_transaction++;

		tcl_file.set_num(AESL_transaction , &tcl_file.trans_num);
	}
}

