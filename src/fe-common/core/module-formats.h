#include "printtext.h"

enum {
	IRCTXT_MODULE_NAME,

	IRCTXT_FILL_1,

	IRCTXT_LINE_START,
	IRCTXT_LINE_START_IRSSI,
	IRCTXT_TIMESTAMP,
	IRCTXT_DAYCHANGE,
	IRCTXT_TALKING_WITH,
	IRCTXT_REFNUM_TOO_LOW,
	IRCTXT_WINDOWLIST_HEADER,
	IRCTXT_WINDOWLIST_LINE,
	IRCTXT_WINDOWLIST_FOOTER,

	IRCTXT_FILL_2,

	IRCTXT_LOOKING_UP,
	IRCTXT_CONNECTING,
	IRCTXT_CONNECTION_ESTABLISHED,
	IRCTXT_CANT_CONNECT,
	IRCTXT_CONNECTION_LOST,
	IRCTXT_SERVER_QUIT,
	IRCTXT_SERVER_CHANGED,
	IRCTXT_UNKNOWN_SERVER_TAG,

	IRCTXT_FILL_3,

	IRCTXT_HILIGHT_HEADER,
	IRCTXT_HILIGHT_LINE,
	IRCTXT_HILIGHT_FOOTER,
	IRCTXT_HILIGHT_NOT_FOUND,
	IRCTXT_HILIGHT_REMOVED,

	IRCTXT_FILL_4,

	IRCTXT_ALIAS_ADDED,
	IRCTXT_ALIAS_REMOVED,
	IRCTXT_ALIAS_NOT_FOUND,
	IRCTXT_ALIASLIST_HEADER,
	IRCTXT_ALIASLIST_LINE,
	IRCTXT_ALIASLIST_FOOTER,

	IRCTXT_FILL_5,

	IRCTXT_LOG_OPENED,
	IRCTXT_LOG_CLOSED,
	IRCTXT_LOG_CREATE_FAILED,
	IRCTXT_LOG_LOCKED,
	IRCTXT_LOG_NOT_OPEN,
	IRCTXT_LOG_STARTED,
	IRCTXT_LOG_STOPPED,
	IRCTXT_LOG_LIST_HEADER,
	IRCTXT_LOG_LIST,
	IRCTXT_LOG_LIST_FOOTER,
	IRCTXT_WINDOWLOG_FILE,
	IRCTXT_WINDOWLOG_FILE_LOGGING,

	IRCTXT_FILL_6,

	IRCTXT_NOT_TOGGLE,
	IRCTXT_PERL_ERROR
};

extern FORMAT_REC fecommon_core_formats[];
