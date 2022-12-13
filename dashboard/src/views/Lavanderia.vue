<template>
<div class="Lavanderia">
<MenuLateral />
<EsquemaESP32 msg="Lavanderia"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompLavanderia',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
