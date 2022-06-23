add_library(GlobalVisionROSLibrary SHARED 
	init_camera.cc
)
target_link_libraries(GlobalVisionROSLibrary ${THIRD_PARTY_LIBS})
