<template>
<div class="Carro">
<MenuLateral />
<EsquemaESP32 msg="Carro"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompCarro',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
