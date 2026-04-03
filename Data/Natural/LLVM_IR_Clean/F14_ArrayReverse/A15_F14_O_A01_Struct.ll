%struct.Bound = type { i32 }
define dso_local void @ArrayReverse(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca %struct.Bound
  %6 = alloca %struct.Bound
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  call void @llvm.memset.p0i8.i64(i8* align 4 %9, i8 0, i64 4, i1 false)
  %11 = getelementptr inbounds %struct.Bound, %struct.Bound* %6, i32 0, i32 0
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  store i32 %13, i32* %11
  br label %14
14:
  %15 = getelementptr inbounds %struct.Bound, %struct.Bound* %5, i32 0, i32 0
  %16 = load i32, i32* %15
  %17 = getelementptr inbounds %struct.Bound, %struct.Bound* %6, i32 0, i32 0
  %18 = load i32, i32* %17
  %19 = icmp slt i32 %16, %18
  br i1 %19, label %20, label %52
20:
  %22 = load i32*, i32** %3
  %23 = getelementptr inbounds %struct.Bound, %struct.Bound* %5, i32 0, i32 0
  %24 = load i32, i32* %23
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %22, i64 %25
  %27 = load i32, i32* %26
  store i32 %27, i32* %7
  %28 = load i32*, i32** %3
  %29 = getelementptr inbounds %struct.Bound, %struct.Bound* %6, i32 0, i32 0
  %30 = load i32, i32* %29
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %28, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = getelementptr inbounds %struct.Bound, %struct.Bound* %5, i32 0, i32 0
  %36 = load i32, i32* %35
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %34, i64 %37
  store i32 %33, i32* %38
  %39 = load i32, i32* %7
  %40 = load i32*, i32** %3
  %41 = getelementptr inbounds %struct.Bound, %struct.Bound* %6, i32 0, i32 0
  %42 = load i32, i32* %41
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %40, i64 %43
  store i32 %39, i32* %44
  %45 = getelementptr inbounds %struct.Bound, %struct.Bound* %5, i32 0, i32 0
  %46 = load i32, i32* %45
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %45
  %48 = getelementptr inbounds %struct.Bound, %struct.Bound* %6, i32 0, i32 0
  %49 = load i32, i32* %48
  %50 = add nsw i32 %49, -1
  store i32 %50, i32* %48
  br label %14
52:
  ret void
}
declare void @llvm.memset.p0i8.i64(i8* nocapture writeonly, i8, i64, i1 immarg)
