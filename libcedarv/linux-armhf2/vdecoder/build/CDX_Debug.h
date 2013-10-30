#ifndef CDX_Debug_h
#define CDX_Debug_h

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef LOG_NDEBUG
#define LOG_NDEBUG 0
#endif

#if LOG_NDEBUG
	
#else
#define LOGV(...) ((void)printf("V/" LOG_TAG ": "));         \
	((void)printf("(%d) ", __LINE__));						 \
	((void)printf(__VA_ARGS__));						     \
	((void)printf("\n"))
	
#define LOGD(...) ((void)printf("D/" LOG_TAG ": "));         \
	((void)printf("(%d) ", __LINE__));						 \
	((void)printf(__VA_ARGS__));						     \
	((void)printf("\n"))

#define LOGI(...) ((void)printf("I/" LOG_TAG ": "));         \
	((void)printf("(%d) ", __LINE__));						 \
	((void)printf(__VA_ARGS__));						     \
	((void)printf("\n"))

#define LOGW(...) ((void)printf("W/" LOG_TAG ": "));         \
	((void)printf("(%d) ", __LINE__));						 \
	((void)printf(__VA_ARGS__));						     \
	((void)printf("\n"))

#endif

#define LOGE(...) ((void)printf("E/" LOG_TAG ": "));         \
	((void)printf("(%d) ",__LINE__));      						\
	((void)printf(__VA_ARGS__));          					\
	((void)printf("\n"))

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
