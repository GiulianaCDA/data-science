
This is a code snippet from the TensorFlow C++ API. It defines a set of kernel functions for counting the number of occurrences of each value in an input tensor and writing the results to an output sparse tensor. The `REGISTER` macro is used to register the kernels with the TensorFlow runtime, and the `TF_CALL_INTEGRAL_TYPES` and `TF_CALL_float` macros are used to generate registrations for various types of data (integral types, floating-point types).

The `DenseCount`, `SparseCount`, and `RaggedCount` functions define the actual kernels that do the counting. They take an input tensor `values`, a set of weights `weights`, and a set of splits `splits` as arguments, and return a sparse tensor with the counts of each value in the input tensor. The `maxlength_` parameter specifies the maximum length of the output tensor, while the `minlength_` parameter specifies the minimum length. The `binary_output_` parameter specifies whether to write binary values (1) or count values (non-negative integers).

The `OutputSparse` function is a helper function that takes a set of counts and writes them to an output sparse tensor. It uses the `batched_map` data structure to efficiently store and update the counts for each batch.