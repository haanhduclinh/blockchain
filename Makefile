all:
	gcc -lstdc++ \
	    -o blockchain \
	    -std=c++11 \
	    -x c++ \
	    main.cpp block.cpp blockchain.cpp sha256.cpp log.cpp json.hpp
