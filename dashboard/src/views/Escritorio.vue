<template>
<div class="Escritorio">
<MenuLateral />
<EsquemaESP32 msg="Escritorio"/>
</div>
</template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompEscritorio',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
