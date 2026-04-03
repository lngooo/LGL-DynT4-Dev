define dso_local void @Mc(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  %7 = load i8*, i8** %2
  %8 = call i64 @strlen(i8* %7)
  %9 = trunc i64 %8 to i32
  store i32 %9, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %46
17:
  %18 = load i8*, i8** %2
  %19 = load i32, i32* %3
  %20 = sext i32 %19 to i64
  %21 = getelementptr inbounds i8, i8* %18, i64 %20
  %22 = load i8, i8* %21
  %23 = zext i8 %22 to i32
  %24 = call i32 @isspace(i32 %23)
  %25 = icmp ne i32 %24, 0
  br i1 %25, label %26, label %42
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %3
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %3
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %31, i64 %34
  %36 = load i32, i32* %4
  %37 = load i32, i32* %3
  %38 = sub nsw i32 %36, %37
  %39 = sext i32 %38 to i64
  call void @llvm.memmove.p0i8.p0i8.i64(i8* align 1 %30, i8* align 1 %35, i64 %39, i1 false)
  %40 = load i32, i32* %4
  %41 = add nsw i32 %40, -1
  store i32 %41, i32* %4
  br label %45
42:
  %43 = load i32, i32* %3
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %3
  br label %45
45:
  br label %10
46:
  ret void
}
declare i64 @strlen(i8*)
declare i32 @isspace(i32)
declare void @llvm.memmove.p0i8.p0i8.i64(i8* nocapture writeonly, i8* nocapture readonly, i64, i1 immarg)
