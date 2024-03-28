namespace CgsNetwork
{
	enum EServerInterfaceEvent : int
	{
		E_SERVER_INTERFACE_CONNECTION_EVENT_START = 0x0,
		E_SERVER_INTERFACE_CONNECTION_EVENT_CONNECTED = E_SERVER_INTERFACE_CONNECTION_EVENT_START,
		E_SERVER_INTERFACE_CONNECTION_EVENT_CONNECT_FAILED = 0x1,
		E_SERVER_INTERFACE_CONNECTION_EVENT_DISCONNECTED = 0x2,
		E_SERVER_INTERFACE_CONNECTION_EVENT_END = 0x3,
		E_SERVER_INTERFACE_GAMES_EVENT_START = 0x4,
		E_SERVER_INTERFACE_GAMES_EVENT_SEARCH_UPDATED = E_SERVER_INTERFACE_GAMES_EVENT_START,
		E_SERVER_INTERFACE_GAMES_EVENT_GAME_STARTED = 0x5,
		E_SERVER_INTERFACE_GAMES_EVENT_KICKED = 0x6,
		E_SERVER_INTERFACE_GAMES_EVENT_PLAYER_ADDED = 0x7,
		E_SERVER_INTERFACE_GAMES_EVENT_PLAYER_REMOVED = 0x8,
		E_SERVER_INTERFACE_GAMES_EVENT_REMOVED_FROM_GAME = 0x9,
		E_SERVER_INTERFACE_GAMES_EVENT_ADDED_TO_GAME = 0xA,
		E_SERVER_INTERFACE_GAMES_EVENT_PLAYER_LIST_CHANGED = 0xB,
		E_SERVER_INTERFACE_GAMES_EVENT_PLAYER_PARAMETERS_CHANGED = 0xC,
		E_SERVER_INTERFACE_GAMES_EVENT_GAME_PARAMETERS_CHANGED = 0xD,
		E_SERVER_INTERFACE_GAMES_EVENT_GAME_DELETED = 0xE,
		E_SERVER_INTERFACE_GAMES_EVENT_END = 0xF,
		E_SERVER_INTERFACE_PLAYER_INFO_EVENT_START = 0x10,
		E_SERVER_INTERFACE_PLAYER_INFO_EVENT_STATS_CHANGED = E_SERVER_INTERFACE_PLAYER_INFO_EVENT_START,
		E_SERVER_INTERFACE_PLAYER_INFO_EVENT_END = 0x11,
		E_SERVER_INTERFACE_TELEMETRY_EVENT_START = 0x12,
		E_SERVER_INTERFACE_TELEMETRY_FIRST_USAGE_DATA_UPLOADED = E_SERVER_INTERFACE_TELEMETRY_EVENT_START,
		E_SERVER_INTERFACE_TELEMETRY_EVENT_END = 0x13
	};
}