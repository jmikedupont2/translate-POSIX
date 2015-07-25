UP	User Portability Utilities 				opt				утилиты для портируемости пользователя			POSIX2_UPE
BE	Batch Environment Services and Utilities opt			сервисы и утилиты пакетной среды
		POSIX2_CHAR_TERM
		POSIX2_LOCALEDEF
		POSIX2_PBS
		POSIX2_PBS_ACCOUNTING
		POSIX2_PBS_LOCATE
		POSIX2_PBS_MESSAGE
		POSIX2_PBS_TRACK
SD	Software Development Utilities 			opt				утилиты для разработки ПО						POSIX2_SW_DEV
CD	C-Language Development Utilities		opt				утилиты разработки для языка си					POSIX2_C_DEV
FR	FORTRAN Runtime Utilities				opt				утилиты времени выполнения для языка фортран	POSIX2_FORT_RUN
FD	FORTRAN Development Utilities			opt				утилиты разработки для языка фортран			POSIX2_FORT_DEV


TSH	Thread Process-Shared Synchronization 	opt	c			разделяемая синхронизация потока процесса	_POSIX_THREAD_PROCESS_SHARED
SPN	Spawn 									opt	c			появление									_POSIX_SPAWN
MSG	Message Passing 						opt	c			прохождение сообщений						_POSIX_MESSAGE_PASSING
MLR	Range Memory Locking 					opt	c			блокирование диапозона памяти				_POSIX_MEMLOCK_RANGE
ML	Process Memory Locking 					opt	c			блокирование памяти процесса				_POSIX_MEMLOCK
FSC	File Synchronization					opt	c			синхронизация файлов						_POSIX_FSYNC

TYM	Typed Memory Objects 					opt	c			объекты типизированной памяти				_POSIX_TYPED_MEMORY_OBJECTS
SHM	Shared Memory Objects 					opt	c			объекты разделяемой памяти					_POSIX_SHARED_MEMORY_OBJECTS

TSS	Thread Stack Size Attribute 			opt	c			атрибут размера стека потока				_POSIX_THREAD_ATTR_STACKSIZE
TSA	Thread Stack Address Attribute 			opt	c			атрибут адреса стека потока					_POSIX_THREAD_ATTR_STACKADDR

TSP	Thread Sporadic Server 					opt	c			сервер единичных потоков					_POSIX_THREAD_SPORADIC_SERVER
SS	Process Sporadic Server 				opt	c			сервер единичных процессов					_POSIX_SPORADIC_SERVER

PS	Process Scheduling 						opt	c			планирование процессов						_POSIX_PRIORITY_SCHEDULING
TPS	Thread Execution Scheduling 			opt	c			планирование выполнения потоков				_POSIX_THREAD_PRIORITY_SCHEDULING

MON	Monotonic Clock 						opt	c			монотонные часы								_POSIX_MONOTONIC_CLOCK
TCT	Thread CPU-Time Clocks 					opt	c			часы процессорного времени потока			_POSIX_THREAD_CPUTIME
CPT	Process CPU-Time Clocks					opt	c			часы процессорного врмени процесса			_POSIX_CPUTIME

SIO	Synchronized Input and Output 			opt	c			синхронный ввод-вывод						_POSIX_SYNCHRONIZED_IO
PIO	Prioritized Input and Output 			opt	c			Приоритетный ввод-вывод						_POSIX_PRIORITIZED_IO

RS	Raw Sockets 							opt	c			прямые соккеты								_POSIX_RAW_SOCKETS
IPV6 IPV6 									opt	c			IPV6										_POSIX_IPV6

XSI	X/Open System Interfaces								системный интерфейс X/Open					_XOPEN_UNIX
		_XOPEN_CRYPT
		_XOPEN_REALTIME
		_XOPEN_REALTIME_THREADS
XSR	XSI STREAMS 							opt	c			потоки(данных) XSI							_XOPEN_STREAMS
		XOPEN_UNIX
UU	UUCP Utilities 							opt	c			утилиты UUCP									XOPEN_UUCP

OH	Optional Header 										опциональный хедер
OF	Output Format Incompletely Specified 					не полностью задан формат вывода

MXX	IEC 60559 Floating-Point Extension 		c				расширение стандарта плавающей точки
MX	IEC 60559 Floating-Point 				c				стандарт плавающей точки
CX	Extension to the ISO C standard 						расширение стандарта си

TRC	Trace 									opt	c			трассировка									_POSIX_TRACE
TRL	Trace Log 								opt	c	trace	логгирование трассировки					_POSIX_TRACE_LOG
TRI	Trace Inherit 							opt	c	trace	наследование трассировки					_POSIX_TRACE_INHERIT
TEF	Trace Event Filter 						opt	c	trace	фильтр событий трассировки					_POSIX_TRACE_EVENT_FILTER
	
RPP	Robust Mutex Priority Protection 		opt	c														_POSIX_THREAD_PRIO_PROTECT
RPI	Robust Mutex Priority Inheritance 		opt	c														_POSIX_THREAD_PRIO_INHERIT
TPP	Non-Robust Mutex Priority Protection 	opt	c
TPI	Non-Robust Mutex Priority Inheritance 	opt	c
MC1	Non-Robust Mutex Priority Protection or 
	.	Non-Robust Mutex Priority Inheritance or 
	.	Robust Mutex Priority Protection or 
	.	Robust Mutex Priority Inheritance 

ADV	Advisory Information					opt	c			дополнительная информация					_POSIX_ADVISORY_INFO
OB	Obsolescent 											устаревший
