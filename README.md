### REQUIRED
`
sudo apt install libavutil-dev libavcodec-dev libavformat-dev libswscale-dev
`

### Example proyects:
- https://github.com/bitmovin/libdash
- https://github.com/illuspas/Node-Media-Server
- https://github.com/ireader/media-server

### Resources
#### HLS
  - https://developer.apple.com/streaming/
  - https://tools.ietf.org/html/draft-pantos-hls-rfc8216bis-04
  - https://tools.ietf.org/html/rfc8216

#### DASH
  - [Overview](./w13533-MPEG-DASH-Overview.doc)
  - [Implementation](./w14865_TR_23009-3-2ed_r6.docx)

### Normative Parts

  - The Media Presentation Description (MPD) describes a Media Presentation, i.e. a bounded or unbounded presentation of media content. In particular, it defines formats to announce resource identifiers for Segments as HTTP-URLs and to provide the context for these identified resources within a Media Presentation.  
  - The Segment format specifying the format of the entity body of an HTTP response to an HTTP GET request or a partial HTTP GET, with the indicated byte range through HTTP/1.1 as defined in RFC 2616, to a resource identified in the MPD.