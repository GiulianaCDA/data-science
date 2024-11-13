These blocks of code are used to define different output formats for the MPEG-4 container. Each block defines a new output format with its own name, long name, mime type, extensions, and codec tags. The `MOV_CLASS` macro is used to define the common fields of the output format, while the `MOVMuxContext` struct contains the data that is specific to the current instance of the output format.

The `priv_data_size` field specifies the size of the private data structure for the output format, which in this case is `sizeof(MOVMuxContext)`. The `audio_codec` and `video_codec` fields specify the default audio and video codecs to use when creating a new media file.

The `init`, `write_header`, `write_packet`, `write_trailer`, `deinit`, and `flags` fields are used to define the methods that will be called when initializing, writing headers, writing packets, writing trailers, and deinitializing the output format. The `codec_tag` field is used to specify the codec tags for the current output format, which is an array of AVCodecTag structures.

The `check_bitstream` field is used to define a method that will be called to check the validity of bitstreams written to this output format. The `priv_class` field is used to define a private class for the output format, which can be used to store additional information about the current instance of the output format.

The `CONFIG_IPOD_MUXER`, `CONFIG_ISMV_MUXER`, and `CONFIG_F4V_MUXER` macros are used to define whether or not the IPod, ISMA, and F4V output formats are included in the build of FFmpeg. These macros are defined based on the configuration options that were chosen when building FFmpeg.