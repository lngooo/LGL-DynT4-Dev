@__const.w.wZ = constant [13 x i32] [i32 1000, i32 900, i32 500, i32 400, i32 100, i32 90, i32 50, i32 40, i32 10, i32 9, i32 5, i32 4, i32 1]
@__const.w.ndcE0 = constant [33 x i8] c"M\00CM\00D\00CD\00C\00XC\00L\00XL\00X\00IX\00V\00IV\00I\00\00"
@.str = constant [4 x i8] c"%s\0A\00"
define dso_local void @w(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca [13 x i32]
  %6 = alloca [33 x i8]
  %7 = alloca i8*
  %8 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 16 %12, i8* align 16 getelementptr inbounds ([33 x i8], [33 x i8]* @__const.w.ndcE0, i32 0, i32 0), i64 33, i1 false)
  %13 = load i8*, i8** %4
  %14 = getelementptr inbounds i8, i8* %13, i64 0
  store i8 0, i8* %14
  %16 = getelementptr inbounds [33 x i8], [33 x i8]* %6, i64 0, i64 0
  store i8* %16, i8** %7
  store i32 0, i32* %8
  br label %18
18:
  %19 = load i32, i32* %8
  %20 = icmp slt i32 %19, 13
  br i1 %20, label %23, label %21
21:
  br label %50
23:
  br label %24
24:
  %25 = load i32, i32* %3
  %26 = load i32, i32* %8
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds [13 x i32], [13 x i32]* %5, i64 0, i64 %27
  %29 = load i32, i32* %28
  %30 = icmp sge i32 %25, %29
  br i1 %30, label %31, label %41
31:
  %32 = load i8*, i8** %4
  %33 = load i8*, i8** %7
  %34 = call i8* @strcat(i8* %32, i8* %33)
  %35 = load i32, i32* %8
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds [13 x i32], [13 x i32]* %5, i64 0, i64 %36
  %38 = load i32, i32* %37
  %39 = load i32, i32* %3
  %40 = sub nsw i32 %39, %38
  store i32 %40, i32* %3
  br label %24
41:
  %42 = load i8*, i8** %7
  %43 = call i64 @strlen(i8* %42)
  %44 = add i64 %43, 1
  %45 = load i8*, i8** %7
  %46 = getelementptr inbounds i8, i8* %45, i64 %44
  store i8* %46, i8** %7
  br label %47
47:
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %8
  br label %18
50:
  ret void
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [100 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %20
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  %16 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  call void @w(i32 %15, i8* %16)
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i8* %17)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
