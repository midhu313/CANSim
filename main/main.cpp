
#include "includes.h"

static const char* tag = "main";

extern "C"{
	void app_main();
}

void app_main(void)
{
    ESP_LOGW(tag, "Free heap size: %lu bytes", esp_get_free_heap_size());
}
