<template>
    <div class="var">
      <MenuLateral />
      <EsquemaESP32 msg="Varanda" />
    </div>
  </template>

<script>
// @ is an alias to /src
import EsquemaESP32 from '@/components/EsquemaESP32.vue'
import MenuLateral from '@/components/MenuLaterial.vue'
export default {
  name: 'CompVaranda',
  components: {
    MenuLateral,
    EsquemaESP32
  }
}
</script>
