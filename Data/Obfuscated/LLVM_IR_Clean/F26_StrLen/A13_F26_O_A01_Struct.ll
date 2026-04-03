%struct.cB0 = type { i32 }
define dso_local i32 @v1(i8* %0) {
  %2 = alloca i8*
  %3 = alloca %struct.cB0
  store i8* %0, i8** %2
  call void @llvm.memset.p0i8.i64(i8* align 4 %5, i8 0, i64 4, i1 false)
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = getelementptr inbounds %struct.cB0, %struct.cB0* %3, i32 0, i32 0
  %9 = load i32, i32* %8
  %10 = sext i32 %9 to i64
  %11 = getelementptr inbounds i8, i8* %7, i64 %10
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %18
14:
  %15 = getelementptr inbounds %struct.cB0, %struct.cB0* %3, i32 0, i32 0
  %16 = load i32, i32* %15
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %15
  br label %6
18:
  %19 = getelementptr inbounds %struct.cB0, %struct.cB0* %3, i32 0, i32 0
  %20 = load i32, i32* %19
  ret i32 %20
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
