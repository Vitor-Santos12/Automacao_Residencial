<template>
<div class="Sala">
<MenuLateral />
<EsquemaESP32 msg="Sala"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompSala',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
